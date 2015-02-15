/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/SheetWithTableController.h>
#import <Safari/NSTableViewDataSource.h>
#import <Safari/NSTableViewDelegate.h>

@class NSArray, NSString;

@interface PlugInAutoStartData : SheetWithTableController <NSTableViewDataSource, NSTableViewDelegate> {

	NSArray* _plugInAutoStartOrigins;

}

@property (nonatomic,copy) NSArray * plugInAutoStartOrigins;              //@synthesize plugInAutoStartOrigins=_plugInAutoStartOrigins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_refreshAllIcons:(id)arg1 ;
-(void)showSheetInWindow:(id)arg1 ;
-(void)hideSheet:(id)arg1 ;
-(void)removeSelectedItems:(id)arg1 ;
-(void)plugInAutoStartDataUpdated;
-(NSArray *)plugInAutoStartOrigins;
-(void)setPlugInAutoStartOrigins:(NSArray *)arg1 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
@end

