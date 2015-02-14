/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarAgentLink/CalStoreRemoteObject.h>

@class NSString;

@interface CalStoreRemoteManagedObject : CalStoreRemoteObject {

	NSString* _objectId;

}

@property (nonatomic,retain) NSString * objectId;              //@synthesize objectId=_objectId - In the implementation block
+(id)fetchObjectsWithPredicate:(id)arg1 ;
+(id)fetchObjectWithObjectId:(id)arg1 ;
+(id)fetchObjectWithUID:(id)arg1 ;
+(char)supportsSecureCoding;
-(char)removeWithError:(id*)arg1 ;
-(id)saveWithError:(id*)arg1 ;
-(NSString *)objectId;
-(void)setObjectId:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

