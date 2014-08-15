//
//  FailedBankInfo.h
//  FailedBankCD
//
//  Created by Panu Ausavasereelert on 8/14/14.
//  Copyright (c) 2014 Panu Ausavasereelert. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FailedBankDetails;

@interface FailedBankInfo : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) FailedBankDetails *details;

@end
