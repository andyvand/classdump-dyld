/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@interface CAKeyPairAttributes : NSObject {

	int _caKeySize;
	int _caKeyAlgorithm;
	int _caUserKeySize;
	int _caUserKeyAlgorithm;
	int _caCertAuthorityKeySize;
	int _caCertAuthorityKeyAlgorithm;
	char _caDoneCAKeyPair;
	OpaqueSecAccessRefRef _caSecAccessRef;

}
-(void)_setToDefaults;
-(OpaqueSecAccessRefRef)_accessRef;
-(void)_setAccessRef:(OpaqueSecAccessRefRef)arg1 ;
-(int)_keySize;
-(void)_setKeySize:(id)arg1 ;
-(void)_setCertAuthorityKeySize:(int)arg1 ;
-(int)_certAuthorityKeySize;
-(int)_keyAlgorithm;
-(void)_setKeyAlgorithm:(id)arg1 ;
-(int)_userKeyAlgorithm;
-(int)_userKeySize;
-(void)_setCertAuthorityKeyAlgorithm:(int)arg1 ;
-(int)_certAuthoritykeyAlgorithm;
-(void)_setDoneCAKeyPair:(char)arg1 ;
-(char)_doneCAKeyPair;
-(void)_saveCAKeyPairPanelValues;
-(void)_updateKeyPairPanelToCAValues;
-(void)_saveUserKeyPairPanelValues;
-(void)_updateKeyPairPanelToUserValues;
-(void)dealloc;
@end

