/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:36:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Library/Application Support/Mail/Plugins/MailAttachmentPlugin.webplugin/MailAttachmentPlugin
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MailAttachmentPlugin/MailAttachmentPlugin-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor;

@interface MFRoundedRectView : UIView {

	UIView* _insetView;
	CGSize _scaleDimensions;
	CGSize _scaleBaselineSize;
	float _stroke;
	float _radius;
	float _inset;
	UIColor* _grayStrokeHighlightedColor;
	UIColor* _grayFillHighlightedColor;
	UIColor* _grayStrokeColor;
	UIColor* _grayFillColor;
	CGRect _minimumRoundedRect;

}
-(void)_printView:(id)arg1 ;
-(void)setInsetBounds:(CGRect)arg1 ;
-(CGRect)insetBounds;
-(CGSize)scaleDimensions;
-(void)constraintWithLowerBounds:(CGRect)arg1 ;
-(void)setBaselineSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)addSubview:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)drawRectForPrinting:(CGRect)arg1 ;
@end
