/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSSecureCoding.h>
#import <CloudKit/NSCopying.h>

@class NSString, NSPredicate, NSArray;

@interface CKQuery : NSObject <NSSecureCoding, NSCopying> {

	NSString* _recordType;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;

}

@property (nonatomic,copy) NSString * recordType;                  //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy) NSPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
+(char)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(void)setRecordType:(NSString *)arg1 ;
-(NSString *)recordType;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 ;
-(id)init;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
@end

