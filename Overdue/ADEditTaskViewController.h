//
//  ADEditTaskViewController.h
//  Overdue
//
//  Created by Angeleah Daidone on 4/3/14.
//  Copyright (c) 2014 Angeleah Daidone. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ADTask.h"

@protocol ADEditTaskViewControllerDelegate <NSObject>

-(void)didUpdateTask;

@end

@interface ADEditTaskViewController : UIViewController <UITextFieldDelegate, UITextViewDelegate>

@property (strong, nonatomic) ADTask *task;
@property (weak, nonatomic) id <ADEditTaskViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) IBOutlet UITextView *textView;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;

- (IBAction)saveBarButtonItemPressed:(UIBarButtonItem *)sender;
@end
