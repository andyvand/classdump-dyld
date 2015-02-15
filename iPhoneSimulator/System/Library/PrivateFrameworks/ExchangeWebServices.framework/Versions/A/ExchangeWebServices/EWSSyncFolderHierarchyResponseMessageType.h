/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class NSString, NSArray;

@interface EWSSyncFolderHierarchyResponseMessageType : EWSResponseMessageType {

	NSString* _SyncState;
	char _IncludesLastFolderInRange;
	NSArray* _Changes;

}

@property (setter=yncState,nonatomic,copy) NSString * SyncState;              //@synthesize SyncState=_SyncState - In the implementation block
@property (assign,nonatomic) char IncludesLastFolderInRange;                  //@synthesize IncludesLastFolderInRange=_IncludesLastFolderInRange - In the implementation block
@property (nonatomic,copy) NSArray * Changes;                                 //@synthesize Changes=_Changes - In the implementation block
+(id)definition;
-(void)setIncludesLastFolderInRange:(char)arg1 ;
-(char)IncludesLastFolderInRange;
-(void)setChanges:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setSyncState:(NSString *)arg1 ;
-(NSString *)SyncState;
-(NSArray *)Changes;
@end

