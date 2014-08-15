//
//  FailedBankDetails.h
//  FailedBankCD
//
//  Created by Panu Ausavasereelert on 8/14/14.
//  Copyright (c) 2014 Panu Ausavasereelert. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FailedBankInfo;

@interface FailedBankDetails : NSManagedObject

@property (nonatomic, retain) NSDate * updateDate;
@property (nonatomic, retain) NSDate * closeDate;
@property (nonatomic, retain) NSNumber * zip;
@property (nonatomic, retain) FailedBankInfo *info;

@end
