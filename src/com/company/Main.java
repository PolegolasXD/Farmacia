package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        String nome;
        Farmacia albino = new Farmacia();
        albino.setRemedio(new String[]{"dorflex", "dipirona", "neusadina", "paracetamol"});
        int escolha;


        System.out.println("Bem vindo a Farmacia");
        System.out.println("Coloque seu nome para ser adicionado ao sitema..:");
        Scanner scanner = new Scanner(System.in);
        nome = scanner.next();
        albino.setCliente(nome);
        System.out.println("Bom dia Senhor(a)"+albino.getCliente());

        while (true) {
            System.out.println("Liste aqui os remedios desejados..:");
            for (int i = 0; i < albino.getRemedio().length;i++)
            {
                System.out.println(i+"->"+albino.getRemedio()[i]);
            }
            System.out.println("Escolha o numero do remedio desejadao..:");
            escolha = scanner.nextInt();

            if (escolha > albino.getRemedio().length)
            {
                System.out.println("Não existe esse numero tente um numero existente:");
                continue;
            }
            else
            {
                System.out.println("Voce escolheu " +albino.getRemedio()[escolha]);
                System.out.println("Obrigado pela compra volte sempre!");
                return;
            }
        }

    }
}
