//
//  ADAddTaskViewController.h
//  Overdue
//
//  Created by Angeleah Daidone on 4/3/14.
//  Copyright (c) 2014 Angeleah Daidone. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ADAddTaskViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) IBOutlet UITextView *textView;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;

- (IBAction)addTaskButtonPressed:(UIButton *)sender;
- (IBAction)cancelButtonPressed:(UIButton *)sender;


@end
