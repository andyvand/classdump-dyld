/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Contacts.app/Contacts
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol AAUICredentialRecoveryPresentationDelegate
@optional
-(id)navigationControllerForPresentationWithCredentialRecoveryController:(id)arg1;

@required
-(void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2;
-(void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(BOOL)arg2;
-(void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2;
@end
