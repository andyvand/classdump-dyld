/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSURL, NSString, NSManagedObjectID;


@protocol EKProtocolMutableSharee <EKProtocolSharee,EKProtocolMutableObject>
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSManagedObjectID * managedObjectID; 
@required
-(void)setName:(id)arg1;
-(NSURL *)URL;
-(NSString *)name;
-(void)setURL:(id)arg1;
-(NSManagedObjectID *)managedObjectID;
-(void)setManagedObjectID:(id)arg1;
-(void)setStatus:(id)arg1;
-(void)setAccessLevel:(id)arg1;

@end

