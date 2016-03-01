//
//  main.cpp
//  Geometry
//
//  Created by Angel Kukushev on 9/9/14.
//  Copyright (c) 2014 Cranial Ink. All rights reserved.
//

#include <iostream>
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "Image.h"
#include <cmath>
using namespace std;
int main()
{
    
	cout << "\nFor square    press 1 \n";
	cout << "For rectangle press 2 \n";
	cout << "For triangle  press 3 \n";
	cout << "For circle    press 4 \n";
	cout << "For range     press 5 \n";
	cout << "For image     press 6 \n";
	for(int figureChoice=0;figureChoice<7;)
	{
        
		if(figureChoice == 1)
		{
            Square sq;
            //Point p[4];
            
            cout<<"Set the coordinates of the four points ( from down left, to top left )"<<endl;
			/*for(int i=0;i<4;i++)
             cin>>p[i].x>>p[i].y;
             sq.setPoints(p);*/
            /*while(p[0].x < p[1].x && p[0].y == p[1].y && p[1].x == p[2].x && p[1].y < p[2].y
             && p[2].x > p[3].x && p[2].y == p[3].y && p[3].x == p[0].x && p[3].y > p[0].y );
             correct square coordinates check*/
			cin>>sq;
            cout << endl;
            cout << "To find the area                                                 press 1 \n";
            cout << "To find perimeter                                                press 2 \n";
            cout << "To find if a point is in the figure                              press 3 \n";
            cout << "To find the type of your figure                                  press 4 \n";
            cout << "To rotate your figure around the center of the coordinate system press 5 \n";
            cout << "To find the length of a side                                     press 6 \n";
            cout << "To get back to the figure menu                                   press 7 \n";
            /*cout << "To find the barycenter                                           press 7 \n";
             cout << "To find the circle described press 8 \n";*/
			
            for(int functionChoice=0;functionChoice<7;)
            {
                if( functionChoice == 1 )
                {
                    cout<<"Area = "<<sq.getArea();
                }
                if( functionChoice == 2 )
                {
                    cout<<"Perimeter = "<<sq.getPerimeter();
                }
                
                if ( functionChoice == 3 )
                {
                    Point dot;
                    cout<<"Put the coordinates of the point you wanna check if it is inside the figure"<<endl;
                    cin>>dot.x>>dot.y;
                    if(sq.isInside(dot) > 0)
                    {
						cout<<"Yep, it's inside";
                    }
                    if(sq.isInside(dot) == 0)
                    {
						cout<<"Nope, it's outside";
                    }
                }
                
                if ( functionChoice == 4 )
                {
                    sq.type();
                }
                
                if( functionChoice == 5 )
                {
                    double angle=0;
                    Point _p1,_p2,_p3,_p4;
                    sq.spin(angle, _p1 , _p2, _p3, _p4);
                }
                
                
                if ( functionChoice == 6 )
                {
                    cout<<"Side = "<<sq.findSide();
                }
                
                /*if( functionChoice == 7 )
                 {
                 cout<<"Barycenter = "<<sq.findBarycenter()<<endl<<endl;
                 }*/
                cout<<endl<<"Function: ";
                cin>>functionChoice;
                cout<<endl;
            }
            
		}
        
        
        
		if(figureChoice == 2)
		{
			Rectangle re;
			//Point p[4];
            
            cout<<"Set the coordinates of the four points ( from down left, to top left )"<<endl;
			/*for(int i=0;i<4;i++)
             cin>>p[i].x>>p[i].y;
             re.setPoints(p);*/
            cin>>re;
            cout <<"\nTo find the area                                                 press 1 \n";
            cout << "To find perimeter                                                press 2 \n";
            cout << "To find if a point is in the figure                              press 3 \n";
            cout << "To find the type of your figure                                  press 4 \n";
            cout << "To rotate your figure around the center of the coordinate system press 5 \n";
            cout << "To find the length                                               press 6 \n";
            cout << "To find the height                                               press 7 \n";
            cout << "To get back to the figure menu                                   press 8 \n";
            /*cout << "to find the circle described                                     press 7 \n";
             cout << "to find the barycenter                                           press 8 \n";*/
			
            for(int functionChoice2=0;functionChoice2<8;)
            {
                if( functionChoice2 == 1 )
                {
                    cout<<"Area = "<<re.getArea();
                }
                if( functionChoice2 == 2 )
                {
                    cout<<"Perimeter = "<<re.getPerimeter();
                }
                
                if( functionChoice2 == 3 )
                {
                    if(re.isInside())
						cout<<"Yep, it's inside";
                    else
						cout<<"Nope, it's outside";
                }
                
                if( functionChoice2 == 4 )
                {
                    re.type();
                }
                
                if( functionChoice2 == 5 )
                {
                    re.spin();
                }
                
                
                if( functionChoice2 == 6 )
                {
                    cout<<"Lenght = "<<re.findLenght();
                    
                }
                if( functionChoice2 == 7 )
                {
                    cout<<"Height = "<<re.findHeight();
                    
                }
                cout<<endl<<"Figure:";
                cin>>functionChoice2;
            }
		}
        
        
		if(figureChoice == 3)
		{
			Triangle tr;
			//Point p[3];
			cout<<"\nSet the coordinates of the three points ( from down left, to top left )"<<endl;
			cin>>tr;
			/*for(int i=0;i<3;i++)
             cin>>p[i].x>>p[i].y;*/
			//tr.setPoints(p);
            cout << endl;
            cout << "To find the area                                                 press 1 \n";
            cout << "To find perimeter                                                press 2 \n";
            cout << "To find if a point is in the figure                              press 3 \n";
            cout << "To find the type of your figure                                  press 4 \n";
            cout << "To rotate your figure around the center of the coordinate system press 5 \n";
            cout << "To find angle                                                    press 6 \n";
            cout << "To find the rectangle around your triangle                       press 7 \n";
            cout << "To get back to the figure menu                                   press 8 \n";
            
			
            for(int functionChoice3=0;functionChoice3<8;)
            {
                if( functionChoice3 == 1 )
                {
                    cout<<"Area = "<<tr.getArea();
                    
                }
                
                if( functionChoice3 == 2 )
                {
                    cout<<"Perimeter = "<<tr.getPerimeter();
                }
                if( functionChoice3 == 3 )
                {
					if(tr.isInside())
                        cout<<"Yep, it's inside";
					else
                        cout<<"Nope, it's outside";
                }
                
                if( functionChoice3 == 4 )
				{
					tr.type();
				}
                
				if( functionChoice3 == 5 )
				{
					tr.spin();
				}
				if( functionChoice3 == 6 )
				{
					cout<< " For angle alpha      :press 1 "<<endl;
					cout<< " For angle betha      :press 2 "<<endl;
					cout<< " For angle gamma      :press 3 "<<endl;
					cout<< " For another function :press 4 "<<endl;
					for(int angleChoice=0;angleChoice<4;)
					{
                        
                        if(angleChoice == 1)
                        {
							cout<<"Alpha = "<<tr.findAlpha();
							
                        }
                        if(angleChoice == 2)
                        {
                            cout<<"Betha = "<<tr.findBetha();
                            
                            
                        }
                        if(angleChoice == 3)
                        {
                            cout<<"Gamma = "<<tr.findGamma();
                            
                            
                        }
                        cout<<endl<<"Angle:";
                        cin>>angleChoice;
					}
				}
				if( functionChoice3 == 7 )
				{
					tr.findRect();
				}
                cout<<endl<<"Function:";
                cin>>functionChoice3;
            }
		}
		if( figureChoice == 4)
		{
			Circle ci;
			//Point c;
			//double ra;
			cout<<"Set the coordinates of the center and the radius"<<endl;
			/*cin>>c.x>>c.y>>ra;
             ci.setCenterAndRadius(c,ra);*/
			cin>>ci;
            cout << endl;
            cout << "To find the area                                                 press 1 \n";
            cout << "To find perimeter                                                press 2 \n";
            cout << "To find if a point is in the figure                              press 3 \n";
            cout << "To find the type of your figure                                  press 4 \n";
            cout << "To rotate your figure around the center of the coordinate system press 5 \n";
            cout << "To find the rectangle(square) around your circle                 press 6 \n";
            cout << "To get back to the figure menu                                   press 7 \n";
            for(int functionChoice4=0;functionChoice4<7;)
            {
                
                if( functionChoice4 == 1)
                {
                    cout<< "Area = "<<ci.getArea();
                }
                if( functionChoice4 == 2 )
                {
                    cout<< "Perimeter = "<<ci.getPerimeter();
                }
                if( functionChoice4 == 3 )
                {
                    Point dot;
					if(ci.isInside(dot))
						cout<<"Yep, it's inside";
                    else
						cout<<"Nope, it's outside";
                }
                if( functionChoice4 == 4 )
                {
                    ci.type();
                }
                if( functionChoice4 == 5)
                {
					
                    ci.spin();
                }
                if( functionChoice4 == 6)
                {
                    ci.findRect();
                }
                cout<<endl<<"Function:";
                cin>>functionChoice4;
            }
		}
		if(figureChoice=6)
		{
			//Image im;
            
		}
        
		cout<<endl<<"Figure:";
		cin>>figureChoice;
	}
    
	system("pause");
    return 0;
    
}
