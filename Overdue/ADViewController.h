//
//  ADViewController.h
//  Overdue
//
//  Created by Angeleah Daidone on 4/3/14.
//  Copyright (c) 2014 Angeleah Daidone. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ADAddTaskViewController.h"
#import "ADDetailTaskViewViewController.h"

@interface ADViewController : UIViewController <ADAddTaskViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, ADDetailTaskViewViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *taskObjects;

@property (strong, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)reorderBarButtonItemPressed:(UIBarButtonItem *)sender;
- (IBAction)addTaskBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
