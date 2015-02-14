/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <HIToolbox/HIToolbox-Structs.h>
@class NSString;

@interface TISInputMethodDataFileLoader : NSObject {

	NSString* _fileName;
	char _isValidFile;
	id _module;
	char _parseOnlyForBasicProperties;

}
-(char)parse;
-(id)initForBasicPropertiesWithFile:(id)arg1 ;
-(void)chooseFormat:(id)arg1 ;
-(char)parseForBasicProperties;
-(CFDictionaryRef)wordList;
-(void)dealloc;
-(CFDictionaryRef)propertyList;
-(id)initWithFile:(id)arg1 ;
@end

