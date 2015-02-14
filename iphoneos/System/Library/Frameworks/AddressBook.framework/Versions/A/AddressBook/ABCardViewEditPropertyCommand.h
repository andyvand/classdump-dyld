/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABBookUndoableCommand.h>

@protocol ABCardViewDataSourceProvider, NSObject;
@class NSString;

@interface ABCardViewEditPropertyCommand : ABBookUndoableCommand {

	id<ABCardViewDataSourceProvider> _dataSourceProvider;
	id<NSObject> _oldValue;
	id<NSObject> _updatedValue;
	NSString* _propertyKey;

}

@property (nonatomic,retain) id<ABCardViewDataSourceProvider> dataSourceProvider;              //@synthesize dataSourceProvider=_dataSourceProvider - In the implementation block
@property (nonatomic,retain) id<NSObject> oldValue;                                            //@synthesize oldValue=_oldValue - In the implementation block
@property (nonatomic,retain) id<NSObject> updatedValue;                                        //@synthesize updatedValue=_updatedValue - In the implementation block
@property (nonatomic,copy) NSString * propertyKey;                                             //@synthesize propertyKey=_propertyKey - In the implementation block
-(void)execute;
-(void)executeUndo;
-(id)initWithDataSourceProvider:(id)arg1 propertyKey:(id)arg2 oldValue:(id)arg3 updatedValue:(id)arg4 ;
-(NSString *)propertyKey;
-(void)setPropertyKey:(NSString *)arg1 ;
-(id<NSObject>)updatedValue;
-(void)setUpdatedValue:(id<NSObject>)arg1 ;
-(id<ABCardViewDataSourceProvider>)dataSourceProvider;
-(void)setDataSourceProvider:(id<ABCardViewDataSourceProvider>)arg1 ;
-(void)setOldValue:(id<NSObject>)arg1 ;
-(id<NSObject>)oldValue;
-(void)dealloc;
@end

