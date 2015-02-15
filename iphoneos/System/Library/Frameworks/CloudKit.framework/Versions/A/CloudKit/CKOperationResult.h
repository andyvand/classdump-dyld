/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/NSSecureCoding.h>

@class NSString, NSError, NSArray;

@interface CKOperationResult : NSObject <NSSecureCoding> {

	NSString* _operationID;
	NSError* _error;
	NSArray* _requestUUIDs;

}

@property (nonatomic,retain) NSString * operationID;              //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSArray * requestUUIDs;              //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
+(char)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(NSString *)operationID;
-(void)setOperationID:(NSString *)arg1 ;
-(NSArray *)requestUUIDs;
-(void)setRequestUUIDs:(NSArray *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
