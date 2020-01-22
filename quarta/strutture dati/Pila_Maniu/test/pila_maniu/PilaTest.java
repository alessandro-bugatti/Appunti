/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pila_maniu;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import static org.junit.Assert.*;

/**
 *
 * @author alex_2
 */
public class PilaTest {
    
    public PilaTest() {
    }
    
    @BeforeClass
    public static void setUpClass() {
        //Ad esempio apri una connessione
    }
    
    @AfterClass
    public static void tearDownClass() {
        //Ad esempio chiude la connessione
    }
    
    @Before
    public void setUp() {
        //Stessa cosa a livello del singolo caso di test
    }
    
    @After
    public void tearDown() {
    }

    /**
     * Test of Size method, of class Pila.
     * Verifica se una Pila appena istanziata è vuota
     */
    @Test
    public void testSize() {
        Pila instance = new Pila();
        int sizeExpected = 0;
        int result = instance.Size();
        assertEquals(sizeExpected,result);
    }
    
    @Test
    public void testSizeN() {
        Pila instance = new Pila();
        int sizeExpected = 10;
        for (int i = 0; i < 10; i++)
            instance.Push(i);
        int result = instance.Size();
        assertEquals(sizeExpected,result);
    }
    
    @Test
    public void testSizeNegative() {
        Pila instance = new Pila();
        int sizeExpected = 0;
        for (int i = 0; i < 10; i++)
            instance.Pop();
        int result = instance.Size();
        assertEquals(sizeExpected,result);
    }
    
    @Test
    public void testSizePushPop() {
        Pila instance = new Pila();
        int sizeExpected = 5;
        for (int i = 0; i < 10; i++)
            instance.Push(i);
        for (int i = 0; i < 5; i++)
            instance.Pop();
        int result = instance.Size();
        assertEquals(sizeExpected,result);
    }

    /**
     * Test of isEmpty method, of class Pila.
     */
    @Test
    public void testIsEmpty() {
        System.out.println("isEmpty");
        Pila instance = new Pila();
        boolean expResult = true;
        boolean result = instance.isEmpty();
        assertEquals(expResult, result);
  }

    /**
     * Test of Push method, of class Pila.
     */
    @Test
    public void testPush() {
        System.out.println("Push");
        
        Pila instance = new Pila();
        instance.Push(5);
        instance.Push(4);
        instance.Push(3);
        String expected = "3->4->5";
        String result = instance.toString();
        assertEquals(expected, result);
        
    }
    
    @Test
    public void testPopPush() {
        System.out.println("PopPush");
        
        Pila instance = new Pila();
        instance.Push(5);
        instance.Push(4);
        instance.Push(3);
        assertEquals(Integer.valueOf(3), instance.Pop());
        assertEquals(Integer.valueOf(4), instance.Pop());
        assertEquals(Integer.valueOf(5), instance.Pop());
        
    }

    /**
     * Test of Pop/Push methods, of class Pila.
     */
    @Test
    public void testPop() {
        System.out.println("Pop");
        Pila instance = new Pila();
        Integer expResult = null;
        Integer result = instance.Pop();
        assertEquals(expResult, result);
    }
    
}
