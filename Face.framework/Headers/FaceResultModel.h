//
//  FaceResultModel.h
//  Face
//
//  Created by MCOMM00008 on 10/03/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FaceResultModel : NSObject
@property(nonatomic) UIImage *faceInFrame;
@property(nonatomic) UIImage *faceBlink;
@property(nonatomic) UIImage *faceLookLeftOrRight;
@property(nonatomic) UIImage *faceSmile;

@end

NS_ASSUME_NONNULL_END
