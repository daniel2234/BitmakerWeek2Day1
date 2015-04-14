//
//  ViewController.h
//  SingleViewApp
//
//  Created by Daniel Kwiatkowski on 2015-04-13.
//  Copyright (c) 2015 Daniel Kwiatkowski. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *tempText;
@property (strong, nonatomic) IBOutlet UILabel *resultLabel;
- (IBAction)convertTemp:(id)sender;


@end

