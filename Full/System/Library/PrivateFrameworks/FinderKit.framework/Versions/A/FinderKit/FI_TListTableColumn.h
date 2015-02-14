/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSTableColumn.h>

@class NSString, NSFormatter;

@interface FI_TListTableColumn : NSTableColumn {

	TString* _columnViewType;
	TNSRef<NSFormatter *> _formatter;
	BOOL _isSortColumn;

}

@property (nonatomic,retain) NSString * columnViewType; 
@property (nonatomic,retain) NSFormatter * formatter; 
@property (assign,nonatomic) BOOL isSortColumn;                      //@synthesize isSortColumn=_isSortColumn - In the implementation block
-(id)copyColumn_FI;
-(void)setColumnViewType:(NSString *)arg1 ;
-(NSString *)columnViewType;
-(BOOL)isSortColumn;
-(void)setIsSortColumn:(BOOL)arg1 ;
-(void)setHidden:(char)arg1 ;
-(void)setWidth:(double)arg1 ;
-(NSFormatter *)formatter;
-(void)setFormatter:(NSFormatter *)arg1 ;
@end

