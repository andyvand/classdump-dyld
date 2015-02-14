/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWLANKit.framework/Versions/A/CoreWLANKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWLANKit/CoreWLANKit-Structs.h>
#import <AppKit/NSView.h>

@class NSTableView, NSString, NSArray;

@interface CWTableItemView : NSView {

	NSTableView* _tableView;
	unsigned long long _row;
	NSString* _title;
	NSArray* _images;

}
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 images:(id)arg3 row:(unsigned long long)arg4 tableView:(id)arg5 ;
-(void)__drawRTLRect:(CGRect)arg1 ;
-(void)__drawLTRRect:(CGRect)arg1 ;
-(void)dealloc;
-(char)accessibilityIsIgnored;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
@end

