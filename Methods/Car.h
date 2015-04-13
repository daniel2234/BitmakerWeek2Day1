//
//  Car.h
//  Methods
//
//  Created by Daniel Kwiatkowski on 2015-04-13.
//  Copyright (c) 2015 Daniel Kwiatkowski. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Car : NSObject

@property(copy)NSString *model;

//Accessors
//-(BOOL)isRunning;
//-(void)setRunning:(BOOL)running;
//-(NSString*) model;
//-(void)setModel:(NSString*)model;


//calculate values
//-(double)maximumSpeed;
//-(double)maximumSpeedUsingLocale:(NSLocale*)locale;

//Action Methods
-(void)startEngine;//<<-(void)startEngine;
-(void)driveForDistance:(NSString*)theDistance;//-(void)driveforDistance:(double)theDistance;
//-(void)drivefromOrigin:(id)theOrigin toDestination:(id)theDestination;
-(void)turnByAngle:(NSNumber *)theAngle quickly:(NSNumber*)useParkingBrake;//-(void)turnByAngle:(double)theAngle;
//-(void)turnToAngle:(double)theAngle;

//Error Handling Methods
//-(void)loadPassenger:(id)aPassenger error:(NSError**)error;

//Constructor methods
//-(id)initWithModel:(NSString*)aModel;
//-(id)initWithModel:(NSString *)aModel mileage:(double)theMileage;

//Comparison methods
//-(BOOL)isEqualToCar:(Car*)anotherCar;
//-(Car*)fasterCar:(Car*)anotherCar;
//-(Car*)slowerCar:(Car*)anotherCar;

//factory methods
//+(Car*)car;
//+(Car*)carWithModel:(NSString*)aModel;
//+(Car*)carWithModel:(NSString *)aModel mileage:(double)theMileage;

//singleton methods
//+(Car*) shareCar;

@end
