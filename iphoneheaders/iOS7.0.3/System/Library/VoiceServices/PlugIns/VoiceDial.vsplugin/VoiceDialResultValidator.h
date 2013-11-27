/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceDial/VSRecognitionResultValidator.h>

@class VoiceDialNameDataSource;

@interface VoiceDialResultValidator : NSObject <VSRecognitionResultValidator> {

	void* _addressBook;
	VoiceDialNameDataSource* _nameSource;

}
-(void)dealloc;
-(void*)_addressBook;
-(id)_nameSource;
-(id)validRecognitionResultFromRecognitionResult:(id)arg1 ;
-(id)validRecognitionResultFromRecognitionResult:(id)arg1 knownDisambiguationValues:(id)arg2 ;
@end
