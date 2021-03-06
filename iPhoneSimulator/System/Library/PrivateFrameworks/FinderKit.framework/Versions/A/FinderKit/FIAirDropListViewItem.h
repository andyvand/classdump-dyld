/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TTableViewItem.h>

@class NSString;

@interface FIAirDropListViewItem : FI_TTableViewItem {

	TFENode* _node;
	double _percentComplete;

}

@property (assign,nonatomic) NSString * stateText; 
@property (assign,nonatomic) double percentComplete;              //@synthesize percentComplete=_percentComplete - In the implementation block
-(void)updatePersonName;
-(NSString *)stateText;
-(id)personName;
-(void)setStateText:(NSString *)arg1 ;
-(id)machineName;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)icon;
-(void)update;
-(const TFENode*)node;
-(id)initWithNode:(const TFENode*)arg1 ;
-(double)percentComplete;
-(void)setPercentComplete:(double)arg1 ;
@end

