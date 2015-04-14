//
//  ViewController.h
//  ExampleApp
//
//  Created by Daniel Kwiatkowski on 2015-04-13.
//  Copyright (c) 2015 Daniel Kwiatkowski. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *textField;

-(IBAction)textFieldReturn:(id)sender;

@end

