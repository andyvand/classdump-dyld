/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:13 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SecurityInterface/SecurityInterface-Structs.h>
#import <AppKit/NSView.h>

@interface SFCertificateView : NSView {

	id _reserved_SFCertificateView;

}
+(id)attributedCertificateName:(id)arg1 showsStatus:(char)arg2 showsIssuer:(char)arg3 selected:(char)arg4 prefix:(id)arg5 ;
+(id)attributedCertificateName:(id)arg1 showsIssuer:(char)arg2 selected:(char)arg3 prefix:(id)arg4 ;
+(id)attributedCertificateName:(id)arg1 showsIssuer:(char)arg2 selected:(char)arg3 ;
+(id)cachedImageNamed:(id)arg1 ;
-(SecTrustRef)_trust;
-(void)_setTrust:(SecTrustRef)arg1 ;
-(void)_setTrustWithPolicies:(id)arg1 ;
-(void)_evaluateTrust;
-(long long)_minBoundsHeight;
-(long long)_minVisibleHeight;
-(char)detailsDisplayed;
-(char)isTrustDisplayed;
-(void)_setCertificateData:(id)arg1 ;
-(id)_certificateData;
-(void)_updateTrustPopupValues:(char)arg1 ;
-(void)_destroyViews;
-(void)_updateTrustValidity:(char)arg1 ;
-(void)_recreateViews;
-(char)policiesDisclosed;
-(unsigned)trustSettingsDomain;
-(void)setTrustSettingsDomain:(unsigned)arg1 ;
-(void)_updateUbertrustPopupValues:(char)arg1 ;
-(char)detailsDisclosed;
-(void)setDetailsDisclosed:(char)arg1 ;
-(void)setPoliciesDisclosed:(char)arg1 ;
-(char)certificationPathDisclosed;
-(void)setCertificationPathDisclosed:(char)arg1 ;
-(void)_setStdTextAttrs:(id)arg1 select:(char)arg2 font:(id)arg3 color:(id)arg4 ;
-(id)_attrStatusString:(id)arg1 status:(int)arg2 ;
-(void)detailsDisclosedClicked:(id)arg1 ;
-(void)ubertrustPopupSelected:(id)arg1 ;
-(void)policiesDisclosedClicked:(id)arg1 ;
-(void)trustPopupSelected:(id)arg1 ;
-(void)_setTrustValues;
-(void)_createViews;
-(CGSize)_redoLayout:(CGRect)arg1 ;
-(void)_postRedoLayout;
-(unsigned)_currentModifierFlags;
-(id)exportedText:(unsigned)arg1 forFile:(char)arg2 ;
-(id)filenameExtension:(unsigned)arg1 ;
-(void)setDisplayTrust:(char)arg1 ;
-(void)saveTrustSettings;
-(void)setDisplayDetails:(char)arg1 ;
-(void)setDisplayCertificationPath:(char)arg1 ;
-(char)certificationPathDisplayed;
-(void)_trustValues;
-(void)certificationPathDisclosedClicked:(id)arg1 ;
-(void)_recalcSubviews;
-(void)setEditableTrust:(char)arg1 ;
-(OpaqueSecCertificateRefRef)certificate;
-(void)helpButtonClicked:(id)arg1 ;
-(void)setCertificate:(OpaqueSecCertificateRefRef)arg1 ;
-(void)setPolicies:(id)arg1 ;
-(id)policies;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)isEditable;
-(char)isFlipped;
-(void)setFrameSize:(CGSize)arg1 ;
-(char)isOpaque;
-(void)dragImage:(id)arg1 at:(CGPoint)arg2 offset:(CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(char)arg7 ;
-(unsigned)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)draggedImage;
-(void)pasteboard:(id)arg1 provideDataForType:(id)arg2 ;
-(id)printJobTitle;
@end
