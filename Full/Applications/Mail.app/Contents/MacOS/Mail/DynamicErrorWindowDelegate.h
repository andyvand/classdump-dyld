/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DynamicErrorWindowDelegate <NSObject>
@required
-(char)displayIndeterminateProgress;
-(id)errorMessageForErrorDiagnosis:(long long)arg1;
-(id)errorDescriptionForErrorDiagnosis:(long long)arg1;
-(id)leftButtonTextForErrorDiagnosis:(long long)arg1;
-(id)rightButtonTextForErrorDiagnosis:(long long)arg1;
-(void)leftActionSelectedWithDiagnosis:(long long)arg1;
-(void)rightActionSelectedWithDiagnosis:(long long)arg1;
-(long long)helpTopicForDiagnosis:(long long)arg1;

@end

