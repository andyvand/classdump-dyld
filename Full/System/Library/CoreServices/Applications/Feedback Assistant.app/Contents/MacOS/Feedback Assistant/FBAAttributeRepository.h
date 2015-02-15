/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface FBAAttributeRepository : NSObject {

	char _isScanning;
	NSArray* _detectedAttributes;

}

@property (retain) NSArray * detectedAttributes;              //@synthesize detectedAttributes=_detectedAttributes - In the implementation block
@property (assign) char isScanning;                           //@synthesize isScanning=_isScanning - In the implementation block
+(id)sharedInstance;
-(void)setDetectedAttributes:(NSArray *)arg1 ;
-(void)setIsScanning:(char)arg1 ;
-(id)classMap;
-(NSArray *)detectedAttributes;
-(char)shouldAutoSubmitAttributes;
-(void)submitAttributes:(/*^block*/id)arg1 ;
-(id)attributeGroupUniqueIdentifier;
-(id)friendlyHardwareName;
-(id)createAttributeGroup;
-(char)isScanning;
-(void)detectAttributesFromDescriptors:(id)arg1 ;
-(char)attributesAreNew;
-(void)autoSubmitOrPromptSubmitAttributes;
-(char)attributesAreExpired;
-(id)init;
-(void)refresh;
@end

