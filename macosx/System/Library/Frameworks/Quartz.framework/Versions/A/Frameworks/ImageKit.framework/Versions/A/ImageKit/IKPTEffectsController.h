/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKViewController.h>

@class IKPTContentViewController, QCCompositionPickerView, NSString;

@interface IKPTEffectsController : IKViewController {

	IKPTContentViewController* _ikpt_contentViewController;
	QCCompositionPickerView* _pickerView;
	NSString* _qcIdentifier;

}

@property (assign) IKPTContentViewController * ikpt_contentViewController;              //@synthesize ikpt_contentViewController=_ikpt_contentViewController - In the implementation block
@property (retain) NSString * qcIdentifier;                                             //@synthesize qcIdentifier=_qcIdentifier - In the implementation block
-(id)selectedQCIdentifier;
-(IKPTContentViewController *)ikpt_contentViewController;
-(void)setupPickerView;
-(NSString *)qcIdentifier;
-(void)setQcIdentifier:(NSString *)arg1 ;
-(id)pickerView;
-(void)setZoomRect:(CGRect)arg1 ;
-(char)compositionPickerViewShouldStackCompositionsOnSelection:(id)arg1 ;
-(void)setIkpt_contentViewController:(IKPTContentViewController *)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)startAnimation;
-(void)loadView;
-(void)setSelectedComposition:(id)arg1 ;
-(void)compositionPickerViewDidStartAnimating:(id)arg1 ;
-(void)compositionPickerViewWillStopAnimating:(id)arg1 ;
-(void)compositionPickerView:(id)arg1 willSelectComposition:(id)arg2 ;
-(void)compositionPickerView:(id)arg1 didSelectComposition:(id)arg2 ;
@end

