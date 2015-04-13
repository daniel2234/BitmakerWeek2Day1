//
//  main.m
//  Methods
//
//  Created by Daniel Kwiatkowski on 2015-04-13.
//  Copyright (c) 2015 Daniel Kwiatkowski. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Car.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Car *porsche = [[Car alloc]init];
        porsche.model = @"Porsche Carrera";
        
        SEL stepOne = NSSelectorFromString(@"Start Engine");
        SEL stepTwo = @selector(driveForDistance:);
        SEL stepThree = @selector(turnByAngle:quickly:);
        
        [porsche performSelector:stepOne];
        
        [porsche performSelector:stepTwo withObject:[NSNumber numberWithDouble:5.7]];
        
        if ([porsche respondsToSelector:stepThree]) {
            [porsche performSelector:stepThree withObject:[NSNumber numberWithDouble:90.0] withObject:[NSNumber numberWithBool:YES]];
        }
        NSLog(@"Step One:%@", NSStringFromSelector(stepOne));
    }
    return 0;
}
