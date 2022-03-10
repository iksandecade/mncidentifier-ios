//
//  FaceClient.h
//  Face
//
//  Created by MCOMM00008 on 10/03/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SplashViewController.h"
#import "FaceSettingModel.h"
#import "FaceIdentifierDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface FaceClient : NSObject

@property(nonatomic, weak)id <FaceIdentifierDelegate> delegate;
@property(nonatomic, weak) FaceSettingModel *setting;

- (void)showFaceIdentifier:(UIViewController*)parent;

@end

NS_ASSUME_NONNULL_END
