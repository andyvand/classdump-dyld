/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/RAID Utility.app/Contents/MacOS/RAID Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RAID Utility/RUSourceTableRegistryGroupItem.h>

@class AHWRControllerStatusItem, AHWRTasksItem;

@interface AHWRSystemHealthGroupItem : RUSourceTableRegistryGroupItem {

	AHWRControllerStatusItem* _controller;
	AHWRTasksItem* _tasks;

}
-(long long)numberOfChildren;
-(id)childAtIndex:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setOutlineView:(id)arg1 ;
-(void)setDevice:(id)arg1 ;
@end

