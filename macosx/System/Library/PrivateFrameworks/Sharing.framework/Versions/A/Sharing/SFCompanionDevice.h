/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Sharing/Sharing-Structs.h>
@class NSString, NSArray, NSMutableSet, NSDictionary;

@interface SFCompanionDevice : NSObject {

	id _node;
	NSString* _name;
	NSString* _type;
	NSString* _identifier;
	NSArray* _services;
	NSString* _serviceName;
	NSMutableSet* _connections;
	NSDictionary* _activities;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,retain) id node;                                 //@synthesize node=_node - In the implementation block
@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * services;                      //@synthesize services=_services - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                  //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSMutableSet * connections;              //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain) NSDictionary * activities;               //@synthesize activities=_activities - In the implementation block
@property (retain) NSString * uniqueIdentifier;                       //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(NSArray *)services;
-(NSString *)serviceName;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setActivities:(NSDictionary *)arg1 ;
-(NSDictionary *)activities;
-(id)model;
-(long long)distance;
-(void)setServices:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(CGImageRef)icon;
-(NSString *)type;
-(NSString *)uniqueIdentifier;
-(void)setType:(NSString *)arg1 ;
-(NSMutableSet *)connections;
-(void)setConnections:(NSMutableSet *)arg1 ;
-(id)node;
-(void)setNode:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
@end

