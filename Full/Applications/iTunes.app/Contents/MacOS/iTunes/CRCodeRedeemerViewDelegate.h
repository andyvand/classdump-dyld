/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:12:56 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/iTunes.app/Contents/MacOS/iTunes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol CRCodeRedeemerViewDelegate <NSObject>
@optional
-(void)codeRedeemerView:(id)arg1 willRecognizeCodes:(id)arg2;

@required
-(void)codeRedeemerView:(id)arg1 didSucceedWithCodes:(id)arg2;
-(void)codeRedeemerView:(id)arg1 didFailWithError:(id)arg2;
-(void)codeRedeemerViewWillFadeStatus:(id)arg1;
-(void)codeRedeemerViewDidFadeStatus:(id)arg1;
-(void)codeRedeemerViewDidFindBox:(id)arg1;
-(void)codeRedeemerViewCameraDidStart:(id)arg1;

@end
