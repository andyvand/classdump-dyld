/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSResponseOperation.h>

@class NSArray;

@interface MFEWSGetItemDataResponseOperation : MFEWSResponseOperation {

	NSArray* _itemIdTypes;
	/*^block*/id _dataHandler;

}

@property (nonatomic,copy) id dataHandler;                       //@synthesize dataHandler=_dataHandler - In the implementation block
@property (nonatomic,retain) NSArray * itemIdTypes;              //@synthesize itemIdTypes=_itemIdTypes - In the implementation block
-(void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2 ;
-(void)executeOperation;
-(void)setDataHandler:(id)arg1 ;
-(NSArray *)itemIdTypes;
-(void)setItemIdTypes:(NSArray *)arg1 ;
-(id)dataHandler;
@end

