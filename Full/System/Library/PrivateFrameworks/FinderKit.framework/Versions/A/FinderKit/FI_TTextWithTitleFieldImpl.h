/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TTextWithTitleFieldImplProtocol;
#import <FinderKit/FinderKit-Structs.h>
@class FI_TTextField, FI_TTitleField;

@interface FI_TTextWithTitleFieldImpl : NSObject {

	FI_TTextField*<TTextWithTitleFieldImplProtocol> _textFld;
	FI_TTitleField* _titleFld;

}

@property (assign) FI_TTextField*<TTextWithTitleFieldImplProtocol> textFld;              //@synthesize textFld=_textFld - In the implementation block
@property (assign) FI_TTitleField * titleFld;                                            //@synthesize titleFld=_titleFld - In the implementation block
-(double)calcHeightToFit:(CGSize)arg1 ;
-(FI_TTextField*<TTextWithTitleFieldImplProtocol>)textFld;
-(void)setTextFld:(FI_TTextField*<TTextWithTitleFieldImplProtocol>)arg1 ;
-(FI_TTitleField *)titleFld;
-(void)setTitleFld:(FI_TTitleField *)arg1 ;
@end
