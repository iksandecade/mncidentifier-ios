//
//  SplashViewController.h
//  Face
//
//  Created by MCOMM00008 on 10/03/22.
//

#import <UIKit/UIKit.h>
#import "FaceIdentifierDelegate.h"
#import "FaceSettingModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SplashViewController : UIViewController

@property(nonatomic, weak)id <FaceIdentifierDelegate> delegate;
@property(nonatomic, weak) FaceSettingModel *setting;

@end

NS_ASSUME_NONNULL_END
