/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMApplicationWorkflowPersonality.h>

@interface AMDictationCommandWorkflowPersonality : AMApplicationWorkflowPersonality
-(id)commandPropertiesFromDocument:(id)arg1 ;
-(id)syncCommandProperties:(id)arg1 atURL:(id)arg2 ;
-(void)updateWorkflowMetaDataWithCommandProperties:(id)arg1 forDocument:(id)arg2 ;
-(id)personalitySettingsDictionary;
-(id)infoStringForCompleteInstallationWithMetaData:(id)arg1 ;
-(char)canSaveDocument:(id)arg1 error:(id*)arg2 ;
-(char)finishSavingDocument:(id)arg1 forOperation:(unsigned long long)arg2 atURL:(id)arg3 error:(id*)arg4 ;
-(id)pluginHeaderViewController;
-(id)imageRepresentation;
@end

