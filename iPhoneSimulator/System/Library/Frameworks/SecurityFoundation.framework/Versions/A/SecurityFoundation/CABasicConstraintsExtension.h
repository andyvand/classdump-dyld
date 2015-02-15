/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSNumber;

@interface CABasicConstraintsExtension : NSObject {

	int _caBasicConstraintsPresent;
	int _caIsCertAuthority;
	int _caPathLengthConstraintPresent;
	NSNumber* _caPathLength;
	int _caCertAuthorityBasicConstraintsPresent;
	int _caCertAuthorityIsCertAuthority;
	int _caCertAuthorityPathLengthConstraintPresent;
	int _caCertAuthorityPathLength;
	int _caUserBasicConstraintsPresent;
	int _caUserIsCertAuthority;
	int _caUserPathLengthConstraintPresent;
	int _caUserPathLength;
	char _caDoneCABasicConstraintsExts;

}
-(void)_setToDefaults;
-(void)_setPathLength:(id)arg1 ;
-(void)_fillInValuesInExtension:(_CE_DataAndType*)arg1 isCACertBeingCreated:(char)arg2 extensionIsPresent:(char*)arg3 ;
-(void)_setAlreadySpecifiedCertAuthorityValues:(char)arg1 ;
-(char)_alreadySpecifiedCertAuthorityValues;
-(void)_saveCertAuthorityPanelValues;
-(void)_updatePanelToCertAuthorityValues;
-(void)_saveUserPanelValues;
-(void)_updatePanelToUserValues;
-(char)_isPresent;
-(void)_setIsPresent:(id)arg1 ;
-(void)_setCertAuthorityBasicConstraintsPresent:(char)arg1 ;
-(id)_pathLength;
-(void)_setPathLengthPresent:(id)arg1 ;
-(int)_pathLengthPresent;
-(void)_setCertAuthorityIsCertAuthority:(char)arg1 ;
-(void)dealloc;
@end
