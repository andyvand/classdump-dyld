/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <BKPlatformCore/BKMacSearchTableCellView.h>

@class NSTextField, NSView;

@interface THMacSearchOutlineCellView : BKMacSearchTableCellView {

	NSTextField* _titleField;
	NSTextField* _contentsField;
	NSTextField* _extraField;
	NSTextField* _resultCount;
	NSView* _marginsView;

}

@property (assign,nonatomic) NSTextField * titleField;                 //@synthesize titleField=_titleField - In the implementation block
@property (assign,nonatomic) NSTextField * contentsField;              //@synthesize contentsField=_contentsField - In the implementation block
@property (assign,nonatomic) NSTextField * extraField;                 //@synthesize extraField=_extraField - In the implementation block
@property (assign,nonatomic) NSTextField * resultCount;                //@synthesize resultCount=_resultCount - In the implementation block
@property (assign,nonatomic) NSView * marginsView;                     //@synthesize marginsView=_marginsView - In the implementation block
@property (assign,nonatomic) long long backgroundStyle; 
-(void)setResultCount:(NSTextField *)arg1 ;
-(void)setExtraField:(NSTextField *)arg1 ;
-(void)setMarginsView:(NSView *)arg1 ;
-(void)setContentsField:(NSTextField *)arg1 ;
-(double)p_heightForField:(id)arg1 ;
-(double)heightAdjustedForTextWrap;
-(NSView *)marginsView;
-(NSTextField *)extraField;
-(NSTextField *)contentsField;
-(id)textFields;
-(NSTextField *)resultCount;
-(NSTextField *)titleField;
-(void)setTitleField:(NSTextField *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)awakeFromNib;
-(void)setRightMargin:(double)arg1 ;
@end

