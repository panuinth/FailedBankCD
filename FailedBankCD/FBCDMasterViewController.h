//
//  FBCDMasterViewController.h
//  FailedBankCD
//
//  Created by Panu Ausavasereelert on 8/14/14.
//  Copyright (c) 2014 Panu Ausavasereelert. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDMasterViewController : UITableViewController

@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;
@property (nonatomic, strong) NSArray *failedBankInfos;

@end
