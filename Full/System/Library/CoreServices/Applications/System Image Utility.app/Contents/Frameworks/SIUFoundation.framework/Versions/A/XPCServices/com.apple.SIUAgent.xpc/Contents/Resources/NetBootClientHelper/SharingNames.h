/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/System Image Utility.app/Contents/Frameworks/SIUFoundation.framework/Versions/A/XPCServices/com.apple.SIUAgent.xpc/Contents/Resources/NetBootClientHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <NetBootClientHelper/NetBootClientHelper-Structs.h>
@interface SharingNames : NSObject
-(char)array:(id)arg1 containsString:(id)arg2 ;
-(char)generateAndSetUniqueClientNameForNetBootClient;
-(char)setByHostPreferencesForClient:(id)arg1 ;
-(void)resetLocalKDCOnVolume:(id)arg1 ;
-(void)bindToServersFromList;
-(id)getServerList;
-(char)isReachableServer:(id)arg1 ;
-(id)hostNameInDictionary:(id)arg1 appendingString:(id)arg2 ;
-(id)nameFromKey:(id)arg1 inDictionary:(id)arg2 appendingString:(id)arg3 ;
-(void)setClientDataFromDictionary:(id)arg1 ;
-(void)removeKeychainItemsOnVolume:(id)arg1 ;
-(void)triggerKDCConfigurationOnVolume:(id)arg1 ;
-(id)getByHostIdentifier;
-(id)validatedPathFromRoot:(id)arg1 addingComponents:(id)arg2 ;
-(char)scSetHostName:(id)arg1 ;
-(id)readDictionaryFromFile:(id)arg1 error:(id*)arg2 ;
-(void)executeQueryAndDelete:(CFDictionaryRef)arg1 withInfo:(char*)arg2 ;
-(char)addBonjourNameInDictionary:(id)arg1 appendingString:(id)arg2 toDict:(id)arg3 ;
-(char)addComputerNameInDictionary:(id)arg1 appendingString:(id)arg2 toDict:(id)arg3 ;
-(char)addHostNameInDictionary:(id)arg1 appendingString:(id)arg2 toDict:(id)arg3 ;
-(char)scSetComputerName:(id)arg1 ;
-(char)scSetZeroConfName:(id)arg1 ;
@end

