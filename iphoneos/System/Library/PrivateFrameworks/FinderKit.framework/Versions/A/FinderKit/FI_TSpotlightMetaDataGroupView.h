/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TDrawRectView.h>

@protocol TTextWithTitleFieldImplProtocol;
@class FI_TTextField, NSDictionary, NSFont;

@interface FI_TSpotlightMetaDataGroupView : FI_TDrawRectView {

	vector<std::__1::pair<TNSRef<FI_TTextField<TTextWithTitleFieldImplProtocol> *>, TNSRef<FI_TLayoutBinder *> >, std::__1::allocator<std::__1::pair<TNSRef<FI_TTextField<TTextWithTitleFieldImplProtocol> *>, TNSRef<FI_TLayoutBinder *> > > >* _textWithTitleFields;
	TNSRef<NSDictionary *> _spotlightMetaData;
	double _interTextFieldYGap;
	BOOL _autoAdjustTitleWidths;
	BOOL _addLabelSuffix;
	BOOL _showAttributesWithNoData;
	FI_TTextField*<TTextWithTitleFieldImplProtocol> _genericTextWithTitleField;
	TNSRef<NSFont *> _titleFieldsFont;

}

@property (nonatomic,retain) NSDictionary * spotlightMetaData; 
@property (assign) double interTextFieldYGap;                               //@synthesize interTextFieldYGap=_interTextFieldYGap - In the implementation block
@property (assign) BOOL addLabelSuffix;                                     //@synthesize addLabelSuffix=_addLabelSuffix - In the implementation block
@property (assign) BOOL showAttributesWithNoData;                           //@synthesize showAttributesWithNoData=_showAttributesWithNoData - In the implementation block
@property (nonatomic,retain) NSFont * titleFieldsFont; 
-(void)initCommon;
-(void)aboutToTearDown;
-(void)setTitleFieldsFont:(NSFont *)arg1 ;
-(void)populate;
-(void)getMaxTitleWith:(double*)arg1 maxTextWidth:(double*)arg2 ;
-(void)adjustTitleWidths:(double)arg1 textWidths:(double)arg2 ;
-(BOOL)addLabelSuffix;
-(TString*)titleForAttributeName:(const TString*)arg1 withLabelSuffix:(BOOL)arg2 ;
-(id)objectForAttributeName:(const TString*)arg1 ;
-(BOOL)showAttributesWithNoData;
-(void)adjustTitleWidths:(double)arg1 ;
-(TString*)dimensionsText:(const TString*)arg1 height:(id)arg2 ;
-(TString*)exposureTimeText:(id)arg1 ;
-(TString*)recordingYearText:(id)arg1 ;
-(NSDictionary *)spotlightMetaData;
-(void)setSpotlightMetaData:(NSDictionary *)arg1 ;
-(NSFont *)titleFieldsFont;
-(double)maxTitleWidth;
-(id)bottomTextField;
-(void)setAddLabelSuffix:(BOOL)arg1 ;
-(double)interTextFieldYGap;
-(void)setInterTextFieldYGap:(double)arg1 ;
-(void)setShowAttributesWithNoData:(BOOL)arg1 ;
-(void)clear;
-(void)reset;
-(void)awakeFromNib;
@end

