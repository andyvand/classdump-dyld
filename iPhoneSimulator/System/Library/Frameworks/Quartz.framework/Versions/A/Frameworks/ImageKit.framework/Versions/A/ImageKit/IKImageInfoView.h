/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKImageEditView.h>

@class NSTableView, NSTabView, IKInfoTabView, IKImageEditWorldMap, NSDictionary, NSArray, NSString;

@interface IKImageInfoView : IKImageEditView {

	NSTableView* _infoTable;
	NSTableView* _gpsTable;
	NSTabView* _contentTabView;
	IKInfoTabView* _infoTabView;
	IKImageEditWorldMap* _worldMap;
	NSDictionary* _metaData;
	NSDictionary* _processedMetaData;
	NSArray* _tabs;
	NSString* _selection;
	double _longitude;
	double _latitude;

}
+(id)sharedImageEditView;
+(id)processMetaData:(id)arg1 ;
+(void)locateLongitude:(double)arg1 latitude:(double)arg2 ;
-(id)tabs;
-(void)viewWillBecomeActive;
-(void)viewWillBecomeInActive;
-(void)tabSelectionChanged:(id)arg1 ;
-(void)setTabs:(id)arg1 ;
-(void)updateTabs;
-(void)beautifyMetaData;
-(id)meta;
-(void)locate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(void)awakeFromNib;
@end

