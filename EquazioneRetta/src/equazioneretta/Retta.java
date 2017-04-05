/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package equazioneretta;

/**
 *
 * @author Elia Fagioli 4INA
 */
public class Retta {
    private double a,b,c;
    private double x,y;
    
    public Retta(double uno, double due, double tre){
        this.a = uno;
        this.b = due;
        this.c = tre;
    }
    public String Tipo(){
        if((this.a==0)&&(this.b!=0)){
            return "Retta Orizzontale";
        }else{
            if((this.b==0)&&(this.a!=0)){
                return "Retta verticale";
            }else{
                return "Retta Obliqua";
            }
        }    
    }
    public boolean Appart(double x, double y){
        if(this.b!=0){
            float m = (float) -(this.a/this.b);
            float q = (float) -(this.c/this.b);
            if(y ==((m*x) + q)){
                return true;
            }else return false;
        }
        else{
            return false;
        }
    }
    public String stampa(){
        String segno= "";
        String s ="";
        if(this.a!=0){
            s = this.a + "x";
        }
        if(this.b!=0){
            if(this.b>0){
                segno =" + ";
            }else{
                segno ="";
            }
            s = s + segno + this.b + "y";
        }
        if(this.c!=0){
            if(this.c>0){
                segno =" + ";
            }else{
                segno ="";
            }
            s = s + segno + this.c + "= 0";
        }
        return s;        
    }
}
