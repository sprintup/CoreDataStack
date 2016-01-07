//
//  Entity+CoreDataProperties.h
//  CoreData
//
//  Created by Stephen R Printup on 1/7/16.
//  Copyright © 2016 Stephen R Printup. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Entity.h"

NS_ASSUME_NONNULL_BEGIN

@interface Entity (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *attribute;

@end

NS_ASSUME_NONNULL_END
