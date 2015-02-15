/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMCommonCore.framework/Versions/A/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCommonCore/AEAnnotationHTMLActivityItemProvider.h>
#import <IMCommonCore/IMActivityItemSource.h>

@class NSString;

@interface AEAnnotationPrintActivityItemProvider : AEAnnotationHTMLActivityItemProvider <IMActivityItemSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * activityType; 
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)supportedActivityTypes;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
@end
