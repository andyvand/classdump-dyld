/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKUIViewController.h>
#import <MapKit/NSTableViewDataSource.h>
#import <MapKit/NSTableViewDelegate.h>

@class NSTableView, NSString;

@interface _MKTableViewController : _MKUIViewController <NSTableViewDataSource, NSTableViewDelegate> {

	NSTableView* _tableView;

}

@property (nonatomic,retain) NSTableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSTableView *)tableView;
-(void)setTableView:(NSTableView *)arg1 ;
@end

