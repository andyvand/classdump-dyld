/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABBookUndoableCommand.h>

@protocol ABCardViewDataSourceProvider;
@interface ABCardViewEditDisplayStyleCommand : ABBookUndoableCommand {

	id<ABCardViewDataSourceProvider> _dataSourceProvider;
	unsigned long long _oldStyle;
	unsigned long long _updatedStyle;

}

@property (nonatomic,readonly) id<ABCardViewDataSourceProvider> dataSourceProvider;              //@synthesize dataSourceProvider=_dataSourceProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long oldStyle;                                      //@synthesize oldStyle=_oldStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long updatedStyle;                                  //@synthesize updatedStyle=_updatedStyle - In the implementation block
-(void)execute;
-(void)executeUndo;
-(id<ABCardViewDataSourceProvider>)dataSourceProvider;
-(id)initWithDataSourceProvider:(id)arg1 oldStyle:(unsigned long long)arg2 updatedStyle:(unsigned long long)arg3 ;
-(unsigned long long)oldStyle;
-(unsigned long long)updatedStyle;
-(void)dealloc;
@end

