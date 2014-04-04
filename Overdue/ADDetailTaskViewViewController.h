//
//  ADDetailTaskViewViewController.h
//  Overdue
//
//  Created by Angeleah Daidone on 4/3/14.
//  Copyright (c) 2014 Angeleah Daidone. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ADTask.h"
#import "ADEditTaskViewController.h"

@protocol ADDetailTaskViewViewControllerDelegate <NSObject>

-(void)updateTask;

@end

@interface ADDetailTaskViewViewController : UIViewController <ADEditTaskViewControllerDelegate>

@property (strong, nonatomic) ADTask *task;
@property (weak, nonatomic) id <ADDetailTaskViewViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UILabel *dateLabel;
@property (strong, nonatomic) IBOutlet UILabel *detailLabel;
- (IBAction)editBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
