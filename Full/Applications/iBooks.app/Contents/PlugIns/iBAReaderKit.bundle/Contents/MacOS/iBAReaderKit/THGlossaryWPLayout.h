/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/TSWPLayout.h>

@protocol THGlossaryLayoutRequirementsProvider;
@class NSObject;

@interface THGlossaryWPLayout : TSWPLayout {

	NSObject*<THGlossaryLayoutRequirementsProvider> mLayoutRequirementsProvider;

}

@property (assign,nonatomic) NSObject*<THGlossaryLayoutRequirementsProvider> layoutRequirementsProvider; 
-(void)setLayoutRequirementsProvider:(NSObject*<THGlossaryLayoutRequirementsProvider>)arg1 ;
-(NSObject*<THGlossaryLayoutRequirementsProvider>)layoutRequirementsProvider;
-(id)reliedOnLayouts;
@end
